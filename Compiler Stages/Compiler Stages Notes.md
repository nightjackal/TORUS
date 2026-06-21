# Here are the extra notes for my compiler stages folder
This .md file contains details about each stage and development in the creation of my compiler.

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
