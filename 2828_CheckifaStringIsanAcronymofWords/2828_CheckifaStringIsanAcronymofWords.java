class Solution {
    public boolean isAcronym(List<String> words, String s) {
        
        StringBuilder wordAcronym = new StringBuilder ();

        for(String word: words){

            wordAcronym.append(word.charAt(0));

        }

        return wordAcronym.toString().equals(s);

    }
}

//2828_CheckifaStringIsanAcronymofWords
