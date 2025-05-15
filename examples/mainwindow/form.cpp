#include "form.h"
#include "ui_form.h"

Form::Form(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Form)
{
    ui->setupUi(this);
    auto e = KTextEditor::Editor::instance();
    auto doc = e->createDocument(nullptr);
    auto v = doc->createView(ui->widget);

    QVBoxLayout *layout = new QVBoxLayout(ui->widget);
    layout->setContentsMargins(0, 0, 0, 0);
    layout->addWidget(v, 1); 
    ui->widget->setLayout(layout);

    v->setBlockSelection(true);
    v->setContextMenu(v->defaultContextMenu());
    v->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
}

Form::~Form()
{
    delete ui;
}
