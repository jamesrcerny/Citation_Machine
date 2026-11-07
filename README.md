# Citation Machine

> A C++ command-line tool that builds MLA-style citations for many types of sources, so you answer a few prompts instead of formatting by hand.


<img width="1692" height="556" alt="Screenshot 2026-11-07 134334" src="https://github.com/user-attachments/assets/8234c2e3-c924-431a-8540-2a581664b458" />
<img width="1311" height="897" alt="Screenshot 2026-11-07 134322" src="https://github.com/user-attachments/assets/8160b214-0182-410f-800c-992c05b86bcc" />


---

## Overview

Formatting citations by hand is tedious, and the punctuation and italics are easy to get wrong. Citation Machine asks for the details of a source one prompt at a time and prints a formatted citation. It runs in a loop, so you can build a whole works-cited list in one session.

## Features

- **Menu-driven:** choose a source type, answer the prompts, and the citation prints.
- **Source types connected to the menu:** magazine article, online video, art, database article, podcast, interview, tweet, website, introduction to a book, online periodical, and multiple books by the same author.
- **One function per format:** each citation style lives in its own small function, so formats are easy to read, test, and fix.
- **Italics marked with asterisks:** titles of larger works are wrapped in `*...*` so they paste cleanly into Markdown or a word processor.

## Tech Stack

- **Language:** C++ (standard library only: `iostream`, `string`)
- **Framework / UI:** command-line interface
- **Key libraries:** none
- **Platform:** any system with a C++ compiler (Windows, macOS, Linux)

## Getting Started

### Build from source
```bash
# clone the repo
git clone https://github.com/jamesrcerny/CitationMachine.git
cd CitationMachine

# compile and run
g++ -o citationmachine CitationMachine.cpp
./citationmachine        # on Windows: citationmachine.exe
```

## Why I Built This

I wanted a practical project for practicing C++: string handling, functions, user input, and a menu loop built on `switch`. It also solves a real annoyance, because I would rather type the details once than fix punctuation by hand.

## Roadmap / Known Limitations

- **Four formats are written but not connected to the menu:** two authors, email, blog entry, and unknown author. Menu options 14 to 16 currently print "Invalid choice," and option 13 (labeled "Unknown Author") exits the program instead.
- **Stray closing quote** at the end of the online video, tweet, website, online periodical, and unknown-author citations.
- Output is not followed by a new line or a copy option.
- Add automated tests for each formatter.
- Create a GUI for the program.

## License

[Choose a license, for example MIT. See the LICENSE file.]

---

*Built by James Cerny — [github.com/jamesrcerny](https://github.com/jamesrcerny)*
