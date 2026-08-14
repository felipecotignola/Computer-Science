	import java.util.Scanner;
	
	class Relogio{
		private int hora,minuto,segundo;
		public void setHora(int n){
			hora=n;	
		}
		public  void setMinuto(int n){
			minuto=n;
		}
		public void setSegundo(int n){
			segundo=n;	
		}
		public void print(){
			System.out.printf("Horario inicial: %02d:%02d:%02d\n",hora,minuto,segundo);
			
		}
		public void incremento(){
			segundo++;
			if(segundo==60){
				segundo=0;
				minuto++;
				if(minuto==60){
					minuto=0;
					hora++;
					if(hora==24){
						hora=0;
					}
				}
			}
		}
		public void printNovo(){
			System.out.printf("Novo horario: %02d:%02d:%02d\n",hora,minuto,segundo);
		}
	}
	
	public class q02{
		public static void main(String[] args){
			Scanner sc=new Scanner(System.in);
			int n=sc.nextInt();
			if(n>=1 && n<=1000){
				for(int i=0;i<n;i++){
					Relogio r=new Relogio();
					int hora=sc.nextInt(),minuto=sc.nextInt(),segundo=sc.nextInt();
					r.setHora(hora);
					r.setMinuto(minuto);
					r.setSegundo(segundo);
					r.print();
					r.incremento();
					r.printNovo();
				}
			}
		}
	}
