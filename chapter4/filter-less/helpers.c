#include "bmp.h"
#include <limits.h>
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    // Loop over every pixel Hint** look at yesterday's filter file helpers.c
    // For each row
    for (int i = 0; i < height; i++)
    {
        // For each column
         for (int j = 0; j < width; j++)
         {
            // Find the "average" of the pixel
            float avrg = (image[i][j].rgbtBlue + image[i][j].rgbtGreen + image[i][j].rgbtRed);
            float roundedAvrg = (round(avrg / 3.0));

            // Update Red, Green, and Blue so that it is grey Rounding
            image[i][j].rgbtRed = roundedAvrg;
            image[i][j].rgbtGreen = roundedAvrg;
            image[i][j].rgbtBlue = roundedAvrg;
         }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    // For each row
    for (int i = 0; i < height; i++)
    {
        //For each column
        for (int j = 0; j < width; j++)
        {
            // Calculate new color value using the Sepia formula
            float sepiaRed = .393 * image[i][j].rgbtRed + .769 * image[i][j].rgbtGreen + .189 * image[i][j].rgbtBlue;
            float sepiaGreen = .349 * image[i][j].rgbtRed + .686 * image[i][j].rgbtGreen + .168 * image[i][j].rgbtBlue;
            float sepiaBlue = .272 * image[i][j].rgbtRed + .534 * image[i][j].rgbtGreen + .131 * image[i][j].rgbtBlue;

            // Round to make sure the hex value is usable
            sepiaBlue = round(sepiaBlue);
            sepiaGreen = round(sepiaGreen);
            sepiaRed = round(sepiaRed);

            // Ensure the result is an integer between 0 and 255, inclusive
            if (sepiaBlue > 255)
            {
                sepiaBlue = 255;
            }
            if (sepiaGreen > 255)
            {
                sepiaGreen = 255;
            }
            if (sepiaRed > 255)
            {
                sepiaRed = 255;
            }

            // Update the color values
            image[i][j].rgbtRed = sepiaRed;
            image[i][j].rgbtGreen = sepiaGreen;
            image[i][j].rgbtBlue = sepiaBlue;
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    // For each row
    for (int i = 0; i < height; i++)
    {
        //For each column (HALF)
        for (int j = 0; j < width / 2; j++)
        {
            // Swap pixels on horizontally opposite sides
            // Note* image [i][j] swaps with image [i][width - 1 - j]
            image[i][j] = image[i][width - 1 - j];
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    // For each row
        // For each collumn
            // Creating a temp image
            // RGBTRIPLE temp_image[height][width];
            // Loop through each pixel of the original image
                // Find the average RGB from surrounding pixels
                // Update value in temp_image
            // Copy temp_image to image
    return;
}
