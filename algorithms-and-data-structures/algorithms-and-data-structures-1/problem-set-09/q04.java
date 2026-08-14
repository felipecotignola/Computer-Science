	import java.util.Scanner;
	class Autor{
		private String nome;
		public Autor(String nome){
			this.nome=nome;
		}
		void print(){
			System.out.println(nome);
		}	
		
	}
	class Livro{
		private String titulo;
		private int anoPubli;
		private Autor ponteiro;
		public Livro(String titulo,int ano,String autor){
			this.titulo=titulo;
			anoPubli=ano;
			ponteiro=new Autor(autor);
			
		}
		void print(){
			System.out.println(titulo);
			System.out.println(anoPubli);
			ponteiro.print();
		}
		
	}
	public class q04{
		public static void main(String[] args){
			Scanner sc=new Scanner(System.in);
			String titulo=sc.nextLine();
			String autor=sc.nextLine();
			int anoPubli=sc.nextInt();
			Livro livro=new Livro(titulo,anoPubli,autor);
			livro.print();	
		}
	}
