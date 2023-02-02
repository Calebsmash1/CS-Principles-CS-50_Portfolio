#include "bmp.h"
// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    int avrg = 1;

    // Loop over every pixel Hint** look at yesterday's filter file helpers.c
    // For each row
    for (int i = 0; i < height; i++)
    {
        // For each column
         for (int j = 0; j < width; j++)
         {
            // Find the "average" of the pixel
            avrg = (image[i][j].rgbtBlue + image[i][j].rgbtGreen + image[i][j].rgbtRed);
            avrg = (avrg / 3.0);

            // Update Red, Green, and Blue so that it is grey Rounding
            update image[i][j].rgbtBlue = avrg

         }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    // For each row
        // Calculate new color value using the Sepia formula
        // Ensure the result is an integer between 0 and 255, inclusive
        // Update the color values
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    // For each row
        // For 1/2 the width
        // Swap pixels on horizontally opposite sides
        // Note* image [i][j] swaps with image [i][width - 1 - j]
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
