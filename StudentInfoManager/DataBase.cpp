#include"DataBase.h"
//静态变量的初始化   不然会出现LNK2001问题的编译问题
StudentList* DataBase::studentList = new StudentList();
CourseList* DataBase::courseList = new CourseList();

DataBase::DataBase()
{
}

DataBase::~DataBase()
{
}

void DataBase::initDataBase()
{
	ifstream inStudent;//创建输入流
	inStudent.open("student.txt");//打开用户列表文件
	string temp;//用于文件获得内容
	vector<string> planeData;//将文件内容放到向量中去
	while (getline(inStudent, temp))
	{
		planeData = Util::split(temp, " ");//使用Util类中的split切割字符串方法
	}
	inStudent.close();//关闭流
}

void DataBase::saveDataBase()
{
	/*Student stu = Student("888", "Ricky", "15级软件3班", "男", "110", "软件工程");
	Student stu1 = Student("22", "Ricky", "15级软件3班", "男", "11", "软件工程");
	Student student[2]={stu,stu1};

	ofstream saveTxt;
	saveTxt.open("student.txt", ios_base::out | ios_base::binary);
	if (saveTxt.is_open())
	{
		saveTxt.write(reinterpret_cast<const char*>(&student), sizeof(student));
		saveTxt.close();
		cout << "保存数据成功！" << endl;
	}*/
	ofstream outStudent;
	outStudent.open("student.txt");
	Node<Student>* student= studentList->head;
	for (int i = 0; student != NULL; i++) {
		outStudent <<"   "<<student->data.getId() << "   " << student->data.getName() << "   " << student->data.getSchoolClass() << "   "
			<< student->data.getSex()<< "   "<<   student->data.getPhoneNumber();
		outStudent << "\n";
		student = student->next;
	}
	//看看还有没有数据没有写出的
	outStudent.flush();
	//关闭流
	outStudent.close();

	ofstream outCourse;
	outCourse.open("course.txt");
	Node<Course>* course = courseList->head;
	for (int i = 0; course != NULL; i++) {
		outCourse << "   " << course->data.getCourseId() << "   " << course->data.getCourseName() 
			<< "   " << course->data.getCourseSemester();
		outCourse << "\n";
		course = course->next;
	}
	//看看还有没有数据没有写出的
	outCourse.flush();
	//关闭流
	outCourse.close();
}