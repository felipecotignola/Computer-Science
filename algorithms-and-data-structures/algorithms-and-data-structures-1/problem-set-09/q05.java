	import java.util.Scanner;
	class Elevador{
		private int andarAtual,totalAndares,capacidade,pessoasPresentes;
		public Elevador(){
			andarAtual=0;
			totalAndares=0;
			capacidade=0;
			pessoasPresentes=0;
		}
		public Elevador(int capacidade,int totalAndares){
			this.capacidade=capacidade;
			this.totalAndares=totalAndares;
		}
		public void inicializa(int capacidade,int totalAndares){

			this.capacidade=capacidade;
			this.totalAndares=totalAndares;
			andarAtual=0;
			pessoasPresentes=0;
		}
		public void entra(){
			if(pessoasPresentes<capacidade){
				pessoasPresentes++;
			}
		}
		public void sai(){
			if(pessoasPresentes>0){
				pessoasPresentes--;
			}
		}
		public void sobe(){
			if(andarAtual<totalAndares){
				andarAtual++;
			}
		}
		public void desce(){
			if(andarAtual>0){
				andarAtual--;
			}
		}
		public int getAndar(){
			return andarAtual;
		}
		public int getTotalAndares(){
			return totalAndares;
		}
		public int getCapacidade(){
			return capacidade;
		}
		public int getPessoasPresentes(){
			return pessoasPresentes;
		} 
	}
	public class q05{
		public static void main(String[] args){
			Scanner sc=new Scanner(System.in);
			int capacidade=sc.nextInt(),totalAndares=sc.nextInt();
			Elevador e=new Elevador(),e2=new Elevador();
			e.inicializa(capacidade,totalAndares);			
			int n=sc.nextInt();
			for(int i=0;i<n;i++){
				String acao=sc.next();	
				if(acao.equals("entrar")){
					e.entra();
				}
				else if(acao.equals("sair")){
					e.sai();
				}
				else if(acao.equals("subir")){
					e.sobe();
				}
				else if(acao.equals("descer")){
					e.desce();
				}
				System.out.printf("%d %d\n",e.getAndar(),e.getPessoasPresentes());
			}
		}
hhhjj===	} s=
