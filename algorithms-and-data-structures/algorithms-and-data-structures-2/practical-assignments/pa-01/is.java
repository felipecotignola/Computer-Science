	import java.util.Scanner;
	public boolean isVogal(String s){
		int tam=string.length(),cont=0;
		for(int i=0;i<tam;i++){
			if(s.charAt(i) == 'A' || s.charAt(i) == 'E' || s.charAt(i) == 'I' || s.charAt(i) == 'O' ||s.charAt(i) == 'U' || s.charAt(i) == 'a' || s.charAt(i) == 'e' || s.charAt(i) == 'i'|| s.charAt(i) == 'o' ||s.charAt(i) == 'u'){
				cont++;
			}
		}
		if(tam==cont){
			return true;
		}
		else{
			return false;
		}
	}

	public boolean isConsoante(String s){
		int tam=strin.length(),cont=0;
		for(int i=0;i<tam;i++){
                	if(s.charAt(i) != 'A' && s.charAt(i) != 'E' && s.charAt(i) != 'I' && s.charAt(i) != 'O' && s.charAt(i) != 'U' && s.charAt(i) != 'a' && s.charAt(i) != 'e' && s.charAt(i) != 'i' && s.charAt(i) != 'o' && s.charAt(i) != 'u'){
                                   cont++;
                         }
            	}
                if(tam==cont){
                	return true;
                 }
                else{
                       	return false;
        	}

	}
	public boolean isNumero(String s){
		int cont=0,tam=s.length();
		for(int i=0;i<tam;i++){
			int n=s.charAt(i);
			if(n>=48 && n<= 57){
				cont++;
			}	
		}	
		if(cont==tam){
			return true;
		}
		else{
			return false;
		}
	}
	public class is{
		public static void main(String[] args){
			Scanner sc=new Scanner(System.in);
		}
	}
