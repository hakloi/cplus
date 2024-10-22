#ifndef VOLUME_OF_LIQUID_HPP
#define VOLUME_OF_LIQUID_HPP

class VolumeOfLiquid {
private:
    unsigned int volume; 

public:
    VolumeOfLiquid(unsigned int vol);

    unsigned int getVolume() const;

    VolumeOfLiquid operator+(const VolumeOfLiquid& other) const;

    VolumeOfLiquid operator-(const VolumeOfLiquid& other) const;

    VolumeOfLiquid operator*(int multiplier) const;

    VolumeOfLiquid operator/(int divisor) const;

    VolumeOfLiquid operator%(int divisor) const;
};

#endif 
