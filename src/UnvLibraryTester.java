public class UnvLibraryTester {
    public static void main(String[] args) {
        Professor prof = new Professor("Prof Nargiza Khudoykulova");
        Book book = new Book("Java Programming", "Nurshod");
        LibrarySystem library = new LibrarySystem();
        library.checkout(prof, book);
    }
}