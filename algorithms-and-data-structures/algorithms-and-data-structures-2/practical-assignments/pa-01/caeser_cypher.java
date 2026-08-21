	import java.util.Scanner;
	public class caeser_cypher{
		public static String cypher(String string){
			String s="";
			for(int i=0;i<string.length();i++){
				char c=(char)(string.charAt(i)+3);
				s+=c;
			}
			return s;
		}
		public static void main(String[] args){
			Scanner sc=new Scanner(System.in);
			String string=sc.nextLine();
			while(string.charAt(0)!='F' && string.charAt(1)!='I' && string.charAt(2)!='M'){
				System.out.printf("%s\n",cypher(string));
				string=sc.nextLine();
			}		
		}
	}
