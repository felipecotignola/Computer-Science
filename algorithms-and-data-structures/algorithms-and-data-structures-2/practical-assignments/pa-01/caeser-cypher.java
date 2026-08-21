	import java.util.Scanner;
	public String cypher(String string){
		String string="";
		for(int i=0;i<string.length();i++){
			char c=(string.charAt(i))+3;
			string+=c;
		}
		return string;	
	}
	public class caeser-cypher{
		public static void main(String[] args){
			Scanner sc=new Scanner(System.in);
			String string=sc.nextLine();
			while(string.charAt(0)!='F' && string.charAt(1)!='I' && string.charAt(2)!='M'){
				System.out.printf("%s\n",cypher(string));
				string=sc.nextLine();
			}		
		}
	}
