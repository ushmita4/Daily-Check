class Solution {
    public int[][] kClosest(int[][] points, int k) {
        Arrays.sort(points,  Comparator.comparingInt(o -> o[0] * o[0] + o[1] * o[1]));
        return Arrays.copyOfRange(points, 0, k);
    }
}
