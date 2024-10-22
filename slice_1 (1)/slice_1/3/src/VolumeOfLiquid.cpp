#include "VolumeOfLiquid.hpp"

VolumeOfLiquid::VolumeOfLiquid(unsigned int vol) : volume(vol) {}

unsigned int VolumeOfLiquid::getVolume() const {
    return volume;
}

VolumeOfLiquid VolumeOfLiquid::operator+(const VolumeOfLiquid& other) const {
    return VolumeOfLiquid(volume + other.volume);
}

VolumeOfLiquid VolumeOfLiquid::operator-(const VolumeOfLiquid& other) const {
    return VolumeOfLiquid(volume < other.volume ? 0 : volume - other.volume);
}

VolumeOfLiquid VolumeOfLiquid::operator*(int multiplier) const {
    return VolumeOfLiquid(volume * multiplier);
}

VolumeOfLiquid VolumeOfLiquid::operator/(int divisor) const {
    if (divisor != 0) {
        return VolumeOfLiquid(volume / divisor);
    }
    return *this; 
}

VolumeOfLiquid VolumeOfLiquid::operator%(int divisor) const {
    if (divisor != 0) {
        return VolumeOfLiquid(volume % divisor);
    }
    return *this; 
}
