import java.util.List;

public class TextJustification {
    public static void main(String[] args) {
        String[] words = {"This", "is", "an", "example", "of", "text", "justification."};
        int maxWidth = 16;

        System.out.println("Array of Words: " + Arrays.toString(words));
        System.out.println("Max Width: " + maxWidth);
        List<String> justifiedText = fullJustify(words, maxWidth);
        System.out.println("Justified Text: " + justifiedText);
    }

    public static List<String> fullJustify(String[] words, int maxWidth) {
        // Implement a method to perform text justification on a given array of words
        return null;
    }
}
