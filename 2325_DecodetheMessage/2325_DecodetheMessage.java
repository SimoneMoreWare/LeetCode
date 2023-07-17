public class Solution {
    public String decodeMessage(String key, String message) {
        HashMap<Character, Character> mapDecode = new HashMap<>();
        StringBuffer result = new StringBuffer();

        char alphabet = 'a';
        for (char c : key.toCharArray()) {
            if (c != ' ') if(mapDecode.get(c)==null) mapDecode.put(c, alphabet++);
        }

        for (char c : message.toCharArray()) {
            if (c != ' ') {
                Character decodedChar = mapDecode.get(c);
                if (decodedChar != null)
                    result.append(decodedChar);
            }else{
                result.append(" ");
            }
        }

        return result.toString();
    }
}

//https://leetcode.com/problems/decode-the-message/submissions/
//2325_DecodetheMessage
