#include <curl/curl.h>

#include <iostream>

int main() {
  CURL* curl = curl_easy_init();
  if (curl == nullptr) {
    return 1;
  }

  curl_easy_setopt(curl, CURLOPT_URL, "https://example.com");
  curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1);

  const auto res = curl_easy_perform(curl);
  if (res != CURLE_OK) {
    std::cerr << "curl_easy_perform(): " << curl_easy_strerror(res) << '\n';
  }

  curl_easy_cleanup(curl);
}
