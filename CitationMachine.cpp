#include <iostream>
#include <string>
using namespace std;

string formatBook(const string& author, const string& title, const string& edition, const string& volume, const string& contributer, const string& publisher, const string& year, const string& pages) {
    return author + ". *" + title + "*. " + ". " + contributer + ", " + edition + ", vol."+ volume + ". " + publisher + ", " + year + ", pp. " + pages + ".";
}

string formatMagazine(const string& author, const string& title, const string& magazineTitle, const string& publicationDate, const string& pageRange) {
    return author + ". \"" + title + ".\" *" + magazineTitle + "*, " + publicationDate + ", pp. " + pageRange + ".";
}

string formatOnlineVideo(const string& title, const string& platform, const string& uploader, const string& date, const string& url) {
    return "\"" + title + ".\" *" + platform + "*, uploaded by " + uploader + ", " + date + ", " + url + "\"";
}

string formatArt(const string& artistName, const string& artworkTitle, const string& creationYear, const string& location) {
    return artistName + ". *" + artworkTitle + "*, " + creationYear + ", " + location + ".";
}

string formatDatabaseArticle(const string& authorName, const string& articleTitle, const string& journalName, const string& volumeNumber, const string& issueNumber, const string& publicationYear, const string& databaseName, const string& url) {
    return authorName + ". \"" + articleTitle + ".\" *" + journalName + "*, vol. " + volumeNumber + ", no. " + issueNumber + ", " + publicationYear + ". " + databaseName + ", " + url + ".";
}

string formatPodcast(const string& hostName, const string& podcastTitle, const string& platform, const string& date, const string& url) {
    return hostName + ", host. \"" + podcastTitle + ".\" *" + platform + "*, " + date + ", " + url + ".";
}

string formatInterview(const string& intervieweeName, const string& interviewerName, const string& interviewDate) {
    return intervieweeName + ". Interview by " + interviewerName + ". " + interviewDate + ".";
}

string formatTweet(const string& authorName, const string& handle, const string& content, const string& date, const string& url) {
    return authorName + " [" + handle + "]. \"" + content + ".\" *Twitter*, " + date + ", " + url + "\"";
}

string formatWebsite(const string& author, const string& title, const string& site, const string& date, const string& url) {
    return author + ". \"" + title + ".\" *" + site + "*, " + date + ", " + url + "\"";
}

string formatIntroduction(const string& authorName, const string& title, const string& bookTitle, const string& editorName, const string& publisherName, const string& year, const string& pages) {
    return authorName + ". Introduction to *" + bookTitle + "*, edited by " + editorName + ", " + publisherName + ", " + year + ", pp. " + pages + ".";
}

string formatOnlinePeriodical(const string& authorName, const string& title, const string& siteName, const string& date, const string& url) {
    return authorName + ". \"" + title + ".\" *" + siteName + "*, " + date + ", " + url + "\"";
}

string formatMultipleBooksSameAuthor(const string& author, const string& title, const string& publisher, const string& year) {
    return author + ". *" + title + "*. " + publisher + ", " + year + ".";
}

string formatUnknownAuthor(const string& title, const string& siteName, const string& date, const string& url) {
    return "\"" + title + ".\" *" + siteName + "*, " + date + ", " + url + "\"";
}

string formatTwoAuthors(const string& author1, const string& author2, const string& title, const string& publisher, const string& year) {
    return author1 + " and " + author2 + ". \"" + title + ".\" *" + publisher + ", " + year + ".";
}

string formatEmail(const string& sender, const string& subject, const string& date) {
    return sender + ". \"" + subject + ".\" Received by [Your Name], " + date + ". Email.";
}

string formatBlogEntry(const string& author, const string& title, const string& blogName, const string& date, const string& url) {
    return author + ". \"" + title + ".\" *" + blogName + "*, " + date + ", " + url + ".";
}

bool citationMachine() {

    int choice;
    string citation;
    bool quit = true;

    while (quit) {
        
        cout << "\n\nChoose source type:\n";
        cout << "1. Book\n2. Magazine\n3. Online Video\n4. Art\n5. Database Article\n6. Podcast\n7. Interview\n8. Tweet\n9. Website\n10. Introduction\n";
        cout << "11. Online Periodical\n12. Multiple Books by Same Author\n13. Unknown Author\n14. Two Authors\n15. Email\n16. Blog Entry\n";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1: {
                string author, title, contributer, edition, volume, publisher, year, pages;
                cout << "Enter author: ";
                getline(cin, author);
                cout << "Enter title: ";
                getline(cin, title);
                cout << "Enter contributor: ";
                getline(cin, contributer);
                cout << "Enter edition: ";
                getline(cin, edition);
                cout << "Enter volume: ";
                getline(cin, volume);
                cout << "Enter publisher: ";
                getline(cin, publisher);
                cout << "Enter year: ";
                getline(cin, year);
                citation = formatBook(author, title, contributer, edition, volume, publisher, year, pages);
                cout << citation;
                break;
            }
            case 2: {
                string author, title, magazine, date, pages;
                cout << "Enter author: ";
                getline(cin, author);
                cout << "Enter article title: ";
                getline(cin, title);
                cout << "Enter magazine name: ";
                getline(cin, magazine);
                cout << "Enter date: ";
                getline(cin, date);
                cout << "Enter pages: ";
                getline(cin, pages);
                citation = formatMagazine(author, title, magazine, date, pages);
                cout << citation;
                break;
            }
            case 3: {
                string title, platform, uploader, date, url;
                cout << "Enter video title: ";
                getline(cin, title);
                cout << "Enter platform: ";
                getline(cin, platform);
                cout << "Enter uploader: ";
                getline(cin, uploader);
                cout << "Enter date: ";
                getline(cin, date);
                cout << "Enter URL: ";
                getline(cin, url);
                citation = formatOnlineVideo(title, platform, uploader, date, url);
                cout << citation;
                break;
            }
            case 4: {
                string artist, title, year, location;
                cout << "Enter artist: ";
                getline(cin, artist);
                cout << "Enter title: ";
                getline(cin, title);
                cout << "Enter year: ";
                getline(cin, year);
                cout << "Enter location: ";
                getline(cin, location);
                citation = formatArt(artist, title, year, location);
                cout << citation;
                break;
            }
            case 5: {
                string author, title, journal, volume, issue, year, database, url;
                cout << "Enter author: ";
                getline(cin, author);
                cout << "Enter article title: ";
                getline(cin, title);
                cout << "Enter journal name: ";
                getline(cin, journal);
                cout << "Enter volume: ";
                getline(cin, volume);
                cout << "Enter issue: ";
                getline(cin, issue);
                cout << "Enter year: ";
                getline(cin, year);
                cout << "Enter database: ";
                getline(cin, database);
                cout << "Enter URL: ";
                getline(cin, url);
                citation = formatDatabaseArticle(author, title, journal, volume, issue, year, database, url);
                cout << citation;
                break;
            }
            case 6: {
                string host, title, platform, date, url;
                cout << "Enter host: ";
                getline(cin, host);
                cout << "Enter podcast title: ";
                getline(cin, title);
                cout << "Enter platform: ";
                getline(cin, platform);
                cout << "Enter date: ";
                getline(cin, date);
                cout << "Enter URL: ";
                getline(cin, url);
                citation = formatPodcast(host, title, platform, date, url);
                cout << citation;
                break;
            }
            case 7: {
                string interviewee, interviewer, date;
                cout << "Enter interviewee: ";
                getline(cin, interviewee);
                cout << "Enter interviewer: ";
                getline(cin, interviewer);
                cout << "Enter date: ";
                getline(cin, date);
                citation = formatInterview(interviewee, interviewer, date);
                cout << citation;
                break;
            }
            case 8: {
                string author, handle, content, date, url;
                cout << "Enter author name: ";
                getline(cin, author);
                cout << "Enter Twitter handle: ";
                getline(cin, handle);
                cout << "Enter tweet content: ";
                getline(cin, content);
                cout << "Enter date: ";
                getline(cin, date);
                cout << "Enter URL: ";
                getline(cin, url);
                citation = formatTweet(author, handle, content, date, url);
                cout << citation;
                break;
            }
            case 9: {
                string author, title, site, date, url;
                cout << "Enter author: ";
                getline(cin, author);
                cout << "Enter page title: ";
                getline(cin, title);
                cout << "Enter website name: ";
                getline(cin, site);
                cout << "Enter date: ";
                getline(cin, date);
                cout << "Enter URL: ";
                getline(cin, url);
                citation = formatWebsite(author, title, site, date, url);
                cout << citation;
                break;
            }
            case 10: {
                string author, title, bookTitle, editor, publisher, year, pages;
                cout << "Enter author of introduction: ";
                getline(cin, author);
                cout << "Enter title of introduction: ";
                getline(cin, title);
                cout << "Enter book title: ";
                getline(cin, bookTitle);
                cout << "Enter editor: ";
                getline(cin, editor);
                cout << "Enter publisher: ";
                getline(cin, publisher);
                cout << "Enter year: ";
                getline(cin, year);
                cout << "Enter pages: ";
                getline(cin, pages);
                citation = formatIntroduction(author, title, bookTitle, editor, publisher, year, pages);
                cout << citation;
                break;
            }
            case 11: {
                string authorName, title, siteName, date, url;
                cout << "Enter author name: ";
                getline(cin, authorName);
                cout << "Enter page title: ";
                getline(cin, title);
                cout << "Enter website name: ";
                getline(cin, siteName);
                cout << "Enter date: ";
                getline(cin, date);
                cout << "Enter URL: ";
                getline(cin, url);
                citation = formatOnlinePeriodical(authorName, title, siteName, date, url);
                cout << citation;
                break;
            }
            case 12: {
                string author, title, publisher, year;
                cout << "Enter author: ";
                getline(cin, author);
                cout << "Enter book title: ";
                getline(cin, title);
                cout << "Enter publisher: ";
                getline(cin, publisher);
                cout << "Enter year: ";
                getline(cin, year);
                citation = formatMultipleBooksSameAuthor(author, title, publisher, year);
                cout << citation;
                break;
            }
            case 13: {
                quit = false;
                return quit;
                break;
            }
            default: {
                cout << "Invalid choice. Please try again.\n";
                break;
            }
        }
    }
}
int main() {

    citationMachine();
    
    return 0;
}
