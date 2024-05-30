#pragma once

#include "document_interface.h"
#include <iostream>

class PDFDocument : public IDocument{
    public:
        void open() override;
        void close() override;
        void save() override;
};