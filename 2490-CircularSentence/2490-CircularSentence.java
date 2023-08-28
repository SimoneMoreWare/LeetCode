class Solution {
    public boolean isCircularSentence(String sentence) {
        String[] splitSentence = sentence.split(" ");
        int len = splitSentence.length;

        for (int i = 0; i < len - 1; i++) {
            if (splitSentence[i].charAt(splitSentence[i].length() - 1) != splitSentence[i + 1].charAt(0)) {
                return false;
            }
        }

        if (splitSentence[0].charAt(0) != splitSentence[len - 1].charAt(splitSentence[len - 1].length() - 1)) {
            return false;
        }

        return true;
    }
}
