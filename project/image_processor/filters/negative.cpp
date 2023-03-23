#include "negative.h"

Image& NegativeFilter::Apply(Image& image) {
    std::cout << "applying -neg filter..." << std::endl;

    for (size_t y = 0; y < image.GetHeight(); ++y) {
        for (size_t x = 0; x < image.GetWidth(); ++x) {
            Color color(1 - image.GetPixel(x, y).GetRed(), 1 - image.GetPixel(x, y).GetGreen(),
                        1 - image.GetPixel(x, y).GetBlue());
            image.WritePixelMatrixCords(x, y, color);
        }
    }
    std::cout << "-neg filter has been successfully applied" << std::endl;
    return image;
}
