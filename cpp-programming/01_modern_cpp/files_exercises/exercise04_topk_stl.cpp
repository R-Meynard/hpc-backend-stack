/*
Exercice 04 — STL & algorithmes : top-k mots fréquents

Objectif :
- Écrire une fonction top_k_words qui, donné un vector<string> words et int k,
  retourne les k mots les plus fréquents (ordre par fréquence décroissante).
- Utiliser unordered_map pour compter et partial_sort ou nth_element pour sélectionner top-k.

Contraintes :
- Complexité raisonnable : compter O(n), sélectionner O(n) ou O(n log k).

Indices :
- Retourner vector<pair<string,int>> (mot, fréquence).
*/

#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
#include <iostream>
#include <cassert>

using pair_si = std::pair<std::string,int>;

std::vector<pair_si> top_k_words(const std::vector<std::string>& words, int k) {
    std::unordered_map<std::string,int> counts;
    for (auto& w : words) counts[w]++;

    std::vector<pair_si> vec;
    vec.reserve(counts.size());
    for (auto& p : counts) vec.emplace_back(p.first, p.second);

    if (k <= 0) return {};
    if ((int)vec.size() <= k) {
        std::sort(vec.begin(), vec.end(), [](const pair_si& a, const pair_si& b){
            return a.second > b.second || (a.second == b.second && a.first < b.first);
        });
        return vec;
    }

    // Use partial_sort to get top-k in sorted order
    std::partial_sort(vec.begin(), vec.begin() + k, vec.end(), [](const pair_si& a, const pair_si& b){
        return a.second > b.second || (a.second == b.second && a.first < b.first);
    });

    vec.resize(k);
    return vec;
}

int main() {
    std::vector<std::string> words = {"apple","banana","apple","orange","banana","apple","kiwi"};
    auto res = top_k_words(words, 2);
    // Expected: apple:3, banana:2
    assert(res.size() == 2);
    assert(res[0].first == "apple" && res[0].second == 3);
    assert(res[1].first == "banana" && res[1].second == 2);

    std::cout << "exercise04: OK\n";
    return 0;
}