# include "BitFlip.h"

Individual BitFlip::mutate (Individual parentIndi, int k){
    Individual newIndi(parentIndi.getString());
    newIndi.flipBit(k % parentIndi.getLength());
    return newIndi;
}