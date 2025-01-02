#include "Replacer.hpp"

// Constructeur
Replacer::Replacer(const std::string &filename, const std::string &s1, const std::string &s2)
    : filename(filename), s1(s1), s2(s2) {
    if (s1.empty() || s2.empty()) {
        throw std::invalid_argument("Strings s1 and s2 cannot be empty.");
    }
}

// Lire le fichier
std::string Replacer::readFile() const {
    std::ifstream file(filename);
    if (!file.is_open()) {
        throw std::runtime_error("Error: Cannot open file " + filename);
    }

    std::stringstream buffer;
    buffer << file.rdbuf();
    file.close();
    return buffer.str();
}

// Écrire dans un nouveau fichier
void Replacer::writeFile(const std::string &content) const {
    std::ofstream file(filename + ".replace");
    if (!file.is_open()) {
        throw std::runtime_error("Error: Cannot create file " + filename + ".replace");
    }

    file << content;
    file.close();
}

// Remplacer les occurrences
std::string Replacer::replace(const std::string &content) const {
    std::string result;
    size_t pos = 0, start = 0;

    while ((pos = content.find(s1, start)) != std::string::npos) {
        result.append(content, start, pos - start); // Ajouter le contenu avant s1
        result.append(s2); // Ajouter s2
        start = pos + s1.length(); // Avancer après s1
    }

    result.append(content, start); // Ajouter le reste
    return result;
}

// Traiter le fichier
void Replacer::process() const {
    std::string content = readFile();
    std::string replacedContent = replace(content);
    writeFile(replacedContent);
}
