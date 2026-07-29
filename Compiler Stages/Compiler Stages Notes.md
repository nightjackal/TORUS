# Here are the extra notes for my compiler stages folder
This .md file contains details about each stage and development in the creation of my compiler.

## STAGE THREE: 29 July 2026
1. Got rid of both the token library and alphaprocessor separate files and now combined them into the normal compiler file
2. Optimizing vector storage of tokens (I have been experimenting with std::arrays instead of vectors because they are much more efficient and safe than vectors.
3. Heavy work on alpha processor--still working on it though
4. Symbol Processor completed
5. I now realize though that when the index of the primary loop is in a point of the source code file in which the length behind the index is less than the length of the largest keyword, the alphaprocessor automatically searches for things less than index 0 which do not exist. I think I have an idea to solve this, check the ideations folder for my Engineering Design Process notes.

## STAGE TWO: 20 June 2026
1. Optimized reading algorithm
2. Began Tokenization process
3. The Tokenizer is only attuned for symbols currently, these symbols can be found in the token_library.h file
4. When outputing the--well--output, my program ignores all whitespace and returns (This can be seen in the screenshot I included)
5. Work on the official syntax for TORUS has begun, I began brainstorming in a notebook last night. I will create some form of .txt file and attatch it to the next stage development in order to explain my ideas for the syntax, how I came up with those ideas, and why I chose to implement the cetain method of syntax I did.

## STAGE ONE: 20 June 2026
1. File Opening Capabilities
2. Determines size of .torus file and uses to create a ceiling for the _for loop_ that reads every char
3. Read and output entire .torus file char by char (preparing for tokenization)
