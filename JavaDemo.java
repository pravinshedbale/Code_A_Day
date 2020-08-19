class Student
{
	int id;
	String name;
}
class JavaDemo
{
	public static void main (String[] args) 
	{
		Student s = new Student();
		s.id = 1;
		s.name = "Pravin";
		System.out.println(s.name+" "+s.id);
	}
}