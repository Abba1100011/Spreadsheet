#ifndef SPREADSHEET_MEANCOLUMN_H
#define SPREADSHEET_MEANCOLUMN_H


#include "OperationColumn.h"
#include "Cell.h"

class MeanColumn final : public OperationColumn {
public:
    MeanColumn();

    virtual ~MeanColumn() final;

    float update() override;

};


#endif //SPREADSHEET_MEANCOLUMN_H
