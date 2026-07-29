import java.util.Scanner;

public class esercizio1 {
    public static void main(String[] args){

        Scanner input = new Scanner(System.in);

        System.out.println("Benvenuto, come ti chiami? ");
        String nome = input.nextLine();

        System.out.println("Ciao" + nome);

        System.out.println("Quanti anni hai? ");
        int eta = input.nextInt();

        if(eta >= 18){
            System.out.println("Sei maggiorenne");
        }else{
            System.out.println("Sei minorenne");
        }

        if(eta >= 0 && eta <= 5){
            System.out.println("Fai l'asilo");
        }else if(eta >= 6 && eta <= 11){
            System.out.println("Fai le elementari");
            System.out.println("Quanti voti vuoi inserire? ");
            int numerovoti = input.nextInt();

            if(numerovoti > 0){
                double somma = 0;

                for(int i = 1; i <= numerovoti; i++){
                    System.out.print("Inserisci il voto" + i + ":");
                    double voto = input.nextDouble();
                    somma += voto;
                }

                double media = somma / numerovoti;
                System.out.println("La media e: "+ media);
            }else{
                System.out.println("Numero di voti non valido.");
            }
            

        }else if(eta >= 12 && eta <= 14){
            System.out.println("Fai le medie");
        }else if(eta >= 15 && eta <= 19){
            System.out.println("Fai le superiori");
        }else{
            System.out.println("Hai finito scuola! ");
        }


        input.close();
    }

}







