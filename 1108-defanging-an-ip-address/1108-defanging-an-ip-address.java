class Solution {
    public String defangIPaddr(String address) {
        String str = address;
        return str.replace(".", "[.]");
    }
}