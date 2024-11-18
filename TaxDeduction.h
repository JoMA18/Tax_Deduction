#ifndef TAX_DEDUCTION_H
#define TAX_DEDUCTION_H

class TaxDeduction {
private:
    float totalTax;

public:
    TaxDeduction(float totalTax); 
    void setApplyDeduction(float deduction);
    float getApplyDeduction();
};

#endif // TAX_DEDUCTION_H
