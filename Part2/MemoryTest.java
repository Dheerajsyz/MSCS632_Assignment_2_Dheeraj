public class MemoryTest {
    public static void main(String[] args) throws InterruptedException {
        Runtime rt = Runtime.getRuntime();
        System.out.println("Before alloc: " + (rt.totalMemory() - rt.freeMemory()));

        Integer[] nums = new Integer[1_000_000];
        for (int i = 0; i < nums.length; i++) nums[i] = i;
        System.out.println("After alloc: " + (rt.totalMemory() - rt.freeMemory()));

        nums = null;
        System.gc();
        Thread.sleep(500);
        System.out.println("After GC: " + (rt.totalMemory() - rt.freeMemory()));
    }
}

