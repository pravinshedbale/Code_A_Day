import java.io.*;
class ArrayInJava
{
	public static void main(String...arg)
	{
		DataInputStream dIn = new DataInputStream(System.in);
		int arr[] = new int[10];
		try
		{
			for(int i=0;i<10;i++)
			{
				arr[i] = Integer.parseInt(dIn.readLine());
			}
		}
		catch(Exception e)
		{
			
		}
		System.out.println("\n----------------OUTPUT-------------------\n");
		for(int i=0;i<10;i++)
		{
			System.out.println(arr[i]);
		}
	}
}