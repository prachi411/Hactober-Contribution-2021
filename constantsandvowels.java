//accept a line and check how many consonants and vowels are there 
import java.util.Scanner;
class line
{	public static void main(String []prachi)
	{	int vowel,constant;
		System.out.println("enter your line here");
		Scanner sc = new Scanner(System.in);
		String ln = sc.nextLine(); //input line
		System.out.println(ln); 
		vowel=0;
		constant=0;
		for(int i=0;i<ln.length();i++)
		{
			if(ln.charAt(i) == 'a' || ln.charAt(i) == 'e' || ln.charAt(i) == 'i' || ln.charAt(i) == 'o' || ln.charAt(i) == 'u'|| ln.charAt(i) == 'A' || ln.charAt(i) == 'E' || ln.charAt(i) == 'I' || ln.charAt(i) == 'E' || ln.charAt(i) == 'O' || ln.charAt(i) == 'U') 
			{	vowel++;
			}
			else
			{	constant++;
			}
		}
		System.out.println("no of vowels:"+vowel); //showing number of vowels
		System.out.println("no of constants:"+constant); //showing number of constant
	}
}
