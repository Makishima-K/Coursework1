#ifndef UPDATE_SAMPLE_NAME_H
#define UPDATE_SAMPLE_NAME_H

#include <string>
#include <array>

cli::array<System::String^>^ GetColumn(System::String^ filename, int columnIndex)
{
    // если файл не существует — возвращаем пустой массив
    if (!System::IO::File::Exists(filename))
        return gcnew cli::array<System::String^>(0);

    System::Collections::Generic::List<System::String^>^ temp =
        gcnew System::Collections::Generic::List<System::String^>();

    try
    {
        for each (System::String ^ line in System::IO::File::ReadLines(filename))
        {
            if (System::String::IsNullOrWhiteSpace(line))
                continue;

            // безопасный split (убирает лишние пробелы)
            cli::array<System::String^>^ parts = line->Split(
                gcnew cli::array<wchar_t>{' ', '\t'},
                System::StringSplitOptions::RemoveEmptyEntries
            );

            if (columnIndex >= 0 && columnIndex < parts->Length)
            {
                temp->Add(parts[columnIndex]);
            }
        }
    }
    catch (System::Exception^)
    {
        // если что-то пошло не так — возвращаем пустой массив
        return gcnew cli::array<System::String^>(0);
    }

    // конвертация List -> array
    return temp->ToArray();
}

#endif