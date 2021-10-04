public class KadanesAlgo {
    public static int kadane(int[] A)
    {
        int max_so_far = 0;
        int max_ending_here = 0;

        for (int i :A)
        {
            max_ending_here = max_ending_here + i;
            max_ending_here = Integer.max(max_ending_here, 0);

            max_so_far = Integer.max(max_so_far, max_ending_here);
        }
        return max_so_far;
    }
    public static void main(String[] args)
    {
        int[] A = {-1, -2, 4, 5, 1, -5, -3, 4};
        System.out.println(kadane(A));
    }
}
