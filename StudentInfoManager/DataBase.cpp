#include"DataBase.h"
//��̬�����ĳ�ʼ��   ��Ȼ�����LNK2001����ı�������
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
	ifstream inStudent;//����������
	inStudent.open("student.txt");//���û��б��ļ�
	string temp;//�����ļ��������
	vector<string> planeData;//���ļ����ݷŵ�������ȥ
	while (getline(inStudent, temp))
	{
		planeData = Util::split(temp, " ");//ʹ��Util���е�split�и��ַ�������
	}
	inStudent.close();//�ر���
}

void DataBase::saveDataBase()
{
	/*Student stu = Student("888", "Ricky", "15�����3��", "��", "110", "�������");
	Student stu1 = Student("22", "Ricky", "15�����3��", "��", "11", "�������");
	Student student[2]={stu,stu1};

	ofstream saveTxt;
	saveTxt.open("student.txt", ios_base::out | ios_base::binary);
	if (saveTxt.is_open())
	{
		saveTxt.write(reinterpret_cast<const char*>(&student), sizeof(student));
		saveTxt.close();
		cout << "�������ݳɹ���" << endl;
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
	//��������û������û��д����
	outStudent.flush();
	//�ر���
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
	//��������û������û��д����
	outCourse.flush();
	//�ر���
	outCourse.close();
}