class Solution {
    public int findComplement(int num) {
	var nBits = (int) Math.floor((Math.log(num) / Math.log(2)) + 1);
	var mask = (1 << nBits) - 1;
	return ~num & mask;
}
}
