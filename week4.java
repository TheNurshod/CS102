public class LibraryBook {
    private String bookTitle;
    private String author;
    private int pages;
    public LibraryBook(){
         this.bookTitle="Unknown";
         this.author="Unknown";
         this.pages=1;
    }

    public LibraryBook(String bookTitle,String author,int pages) {
        this.bookTitle = bookTitle;
        this.author = author;
        setPages(pages);
    }
    public String getBookTitle(){
        return bookTitle;
    }
    public void setBookTitle(String bookTitle){
        this.bookTitle= bookTitle;
    }

    public String getAuthor() {
        return author;
    }

    public void setAuthor(String author) {
        this.author = author;
    }

    public int getPages() {
        return pages;
    }

    public void setPages(int pages) {
        if(pages>0){
        this.pages = pages;
        }
    }
    public boolean isThick(){
        return pages>500;
    }
}
public class LibarryBookTest {
    public static void main(String[] args) {
        LibraryBook book1 = new LibraryBook();
        book1.setBookTitle(" Atom Odatlar ");
        book1.setAuthor("Deyl Karnegi");
        book1.setPages(320);
        System.out.println("Title " + book1);
        System.out.println("Thick?" + (book1.isThick() ? " yes" : " no"));

    }
}


public class StepCounter {
    private static int totalSteps = 0;
    private int steps = 0;

    public void walk(int count) {
        if (count > 0) {
            steps += count;
            totalSteps += count;
        }
    }
    public int getSteps() {
        return steps;
    }
    public static int getTotalSteps() {
        return totalSteps;
    }
    public static void reset() {
        totalSteps = 0;
    }
    public String toString() {
        return String.valueOf(steps);
    }
}
public class StepCounterTest {
    public static void main(String[] args) {
        StepCounter a = new StepCounter();
        StepCounter b = new StepCounter();

        a.walk(300);
        b.walk(700);
        System.out.println("1st" + a);
        System.out.println("2nd " + b);
        System.out.println("Total: " + StepCounter.getTotalSteps());
        StepCounter.reset();
        StepCounter c = new StepCounter();
        c.walk(450);
        System.out.println("After reset");
        System.out.println("C " + c);
        System.out.println("In Total " + StepCounter.getTotalSteps());
    }
}

