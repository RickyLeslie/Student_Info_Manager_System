#include"Course.h"

Course::Course(){}
Course::Course(string courseId, string courseName, string courseSemester)
{
	this->courseId = courseId;
	this->courseName = courseName;
	this->courseSemester = courseSemester;
}
Course::~Course() {}
void Course::setCourseId(string courseId)
{
	this->courseId = courseId;
}
string Course::getCourseId()
{
	return courseId;
}

void Course::setCourseName(string courseName)
{
	this->courseName = courseName;
}
string Course::getCourseName()
{
	return courseName;
}

void Course::setCourseSemester(string courseSemester)
{
	this->courseSemester = courseSemester;
}
string Course::getCourseSemester()
{
	return courseSemester;
}

/*void Course::print()
{
	cout <<"课程编号: "<<getCourseId() <<" 课程名: "<< getCourseName()<< " 开课学期: " <<getCourseSemester();
}*/
void Course::print()
{
	cout << "            " << getCourseId() << "      " << getCourseName() << "     " << getCourseSemester();
}

