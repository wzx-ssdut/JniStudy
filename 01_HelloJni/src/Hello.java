package wzx.ssdut;

public class Hello {
    public static native void hello();

    public static void main(String[] args) {
        hello();
    }

    static {
        System.loadLibrary("Hello");
    }
}
