# My Notes Page
## 29 July 2026
So, the constraints for the problem I need to solve are:
  1. Solution must process words in a way where the index does not go searching for unreal targets
  2. Cannot create new vectors (because the compiler already uses four and that is my limit)

Define:
I need to create something that will ensure that the alphaprocessor does not search for unreal targets before where the file begins 
Ideas:
1. Create a void function that stops or allows to continue the alpha processor after it figures out wether it would lead to unwanted results.
2. Create a special syntax rule where the first _certain number*_ of characters in a TORUS file are priorly defined
3.  Implement into the alphaprocessor an algorithm which identifies wether the current keyword under index would search for unreal targets before where the file begins

Currently, I think that the second idea would be the most simple tool (And as MIT Professor Patrick Henry Winston said in MIT OCW class 6.034, Simple ideas are sometimes the most powerful). Regarding Professor Winston's wisdom, I am going to take the simple ideation as my primary design. 
## 20 June 2026
1. Remember to remove personal directory before publishing
2. Figure out a way to deal with decimals points in doubles, because tokenization is not going to like them for a bit
## 
