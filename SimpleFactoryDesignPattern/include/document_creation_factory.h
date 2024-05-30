#pragma once

#include "word_document.h"
#include "pdf_document.h"
#include <memory>

class DocumentFactory
{
public:
    static std::unique_ptr<IDocument> createDocument(const std::string &documentType)
    {
        if (documentType == "Word")
            return std::make_unique<WordDocument>();
        if (documentType == "PDF")
            return std::make_unique<PDFDocument>();
        return std::make_unique<PDFDocument>();
    }
};