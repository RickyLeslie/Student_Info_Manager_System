#include"CourseService.h"
CourseService::CourseService()
{
}

CourseService::~CourseService()
{
}

void CourseService::addCourseService()
{
	Util::clear();
	string courseId;     //课程编号
	string courseName;   //课程名字
	string courseSemester;//开课学期

	cout << "请输入课程编号:" << endl;
	cin >> courseId;
	cout << "请输入课程名字:" << endl;
	cin >> courseName;
	cout << "请输入开课学期:" << endl;
	cin >> courseSemester;
	Course course(courseId, courseName, courseSemester);
	//cout << "请输入学生的选修课程:" << endl;
	DataBase::courseList->add(course);
	Util::pressAnyKeyToContinue();
}
void CourseService::removeCourseService() 
{
	Util::clear();
	string id;
	cout << "请输入您想要删除课程信息的ID:" << endl;
	cin >> id;
	DataBase::courseList->remove(id);
	Util::pressAnyKeyToContinue();
}
void CourseService::queryCourseService() 
{
	Util::clear();
	cout << "请输入查询课程的ID:" << endl;
	string id;
	cin >> id;
	DataBase::courseList->get(id)->data.print();
	Util::pressAnyKeyToContinue();
}
void CourseService::printAllStudentService() 
{
	Util::clear();
	cout << "------------------选课------------------" << endl;
	cout << "          课程编号          课程名          开课学期" << endl;
	DataBase::courseList->printAll();
	cout << "----------------------------------------" << endl;
	Util::pressAnyKeyToContinue();
}