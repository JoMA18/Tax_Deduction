#ifndef TAX_DEDUCTION_H
#define TAX_DEDUCTION_H

class TaxDeduction : public CompleteEmployee : public PartialEmployee {
private:
    float totalTax;

public:
    TaxDeduction(float totalTax); 
    float getPTotalTax();
    float getCTotalTax();
};

#endif 
