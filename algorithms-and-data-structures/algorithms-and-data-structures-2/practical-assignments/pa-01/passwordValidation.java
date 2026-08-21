	import java.util.Scanner;
	public boolean validation(String string){
		if(string.length()>=8){
			int upperCase=0,lowerCase=0,number=0,specialChar=0;
			for(int i=0;i<string.length();i++){
				if(string.charAt(i)>=65 && string.charAt(i)<=90){
					upperCase++;
				}
				else if(string.charAt(i)>=97 && string.charAt(i)<=122){
					lowerCase++;
				}
				else if(string.charAt(i)>=48 && string.charAt(i)<=57){
					number++;
				}
				else{
					specialChar++;
				}
			}
			if(upperCase!=0 && lowerCase!=0 && number!=0 && specialChar!=0){
				return true;
			}
			else{
				return false;
			}
		}
		else{
			return false;
		}
	}
	public class passwordValidation{
		public static void main(String[] args){
			Scanner sc=new Scanner(System.in);
			String s=sc.next;
			if(validation(s)){
				System.out.printf("SIM\n");
			}
			else{
				System.out.printf("NAO\n");
			}
			
		}
	}
