#include <stdio.h>
#include <stdlib.h>

// Function to generate HTML code for the title
void generateTitleHTML(char *title) {
   printf("<h1>%s</h1>", title);
}

// Function to generate HTML code for a paragraph
void generateParagraphHTML(char *paragraph) {
   printf("<p>%s</p>", paragraph);
}

// Function to generate HTML code for a link
void generateLinkHTML(char *url, char *linkText) {
   printf("<a href=\"%s\">%s</a>", url, linkText);
}

// Function to generate HTML code for an image
void generateImageHTML(char *url, char *altText) {
   printf("<img src=\"%s\" alt=\"%s\">", url, altText);
}

int main() {
   char title[] = "My Sample Webpage";
   char paragraph[] = "This is a sample paragraph.";
   char url[] = "https://www.example.com";
   char linkText[] = "Visit Example.com";
   char imageURL[] = "https://www.example.com/image.jpg";
   char altText[] = "Sample Image";

   printf("<!DOCTYPE html>\n<html>\n<head>\n<title>%s</title>\n</head>\n<body>", title);

   generateTitleHTML(title);
   generateParagraphHTML(paragraph);
   generateLinkHTML(url, linkText);
   generateImageHTML(imageURL, altText);

   printf("\n</body>\n</html>");

   return 0;
}