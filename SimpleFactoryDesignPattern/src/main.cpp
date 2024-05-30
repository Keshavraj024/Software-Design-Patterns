#include "document_creation_factory.h"


int main(){
    auto document = DocumentFactory::createDocument("PDF");

    document->open();
    document->close();
    document->save();
    return 0;
}