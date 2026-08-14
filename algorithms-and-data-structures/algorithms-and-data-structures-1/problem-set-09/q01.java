	import java.util.Scanner;
	class Pessoa{
		String nome;
		int idade,altura;
	}
	public class q01{
		public static void main(String[] args){
			Scanner sc=new Scanner(System.in);
			int n=sc.nextInt();
			Pessoa[] v=new Pessoa[n];
			for(int i=0;i<n;i++){
				v[i]=new Pessoa();
				v[i].nome=sc.next();
				v[i].idade=sc.nextInt();
				v[i].altura=sc.nextInt();
				System.out.printf("Nome: %s | Idade: %d | Altura: %d cm\n",v[i].nome,v[i].idade,v[i].altura);	
			}
		}
	}
