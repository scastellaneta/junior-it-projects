import java.util.Scanner;

public class gestionescuola {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Benvenuto, come ti chiami? ");
        String nome = input.nextLine();

        System.out.println("Ciao " + nome + "!");

        System.out.print("Quanti anni hai? ");
        int eta = input.nextInt();

        // Controllo maggiorenne / minorenne
        if (eta >= 18) {
            System.out.println("Sei maggiorenne.");
        } else if (eta >= 0) {
            System.out.println("Sei minorenne.");
        }

        // Determinazione fascia scolastica e calcolo media
        if (eta >= 0 && eta <= 5) {
            System.out.println("Fai l'asilo.");
        } else if (eta >= 6 && eta <= 11) {
            System.out.println("Fai le elementari.");
            calcolaEStampaMedia(input);
        } else if (eta >= 12 && eta <= 14) {
            System.out.println("Fai le medie.");
            calcolaEStampaMedia(input);
        } else if (eta >= 15 && eta <= 19) {
            System.out.println("Fai le superiori.");
            calcolaEStampaMedia(input);
        } else {
            System.out.println("Hai finito la scuola!");
        }

        input.close();
    }

    /**
     * Metodo modulare per la gestione dell'input dei voti e il calcolo della media.
     */
    public static void calcolaEStampaMedia(Scanner input) {
        System.out.print("Quanti voti vuoi inserire? ");
        int numeroVoti = input.nextInt();

        if (numeroVoti > 0) {
            double somma = 0;

            for (int i = 1; i <= numeroVoti; i++) {
                System.out.print("Inserisci il voto " + i + ": ");
                double voto = input.nextDouble();
                somma += voto;
            }

            double media = somma / numeroVoti;
            System.out.printf("La tua media è: %.2f%n", media); // Formattato a 2 cifre decimali
        } else {
            System.out.println("Numero di voti non valido.");
        }
    }
}







