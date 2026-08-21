	import java.util.Scanner;
	public class sumOfDigits{
		public static int recursao(int n){
			if(n<10){
				return n;
			}
			int soma=n%10;
			soma+=recursao(n/10);
			return soma;
		}
		public static void main(String[] args){
			Scanner sc=new Scanner(System.in);
			int n=sc.nextInt();
			System.out.printf("%d",recursao(n));
		}
	}
