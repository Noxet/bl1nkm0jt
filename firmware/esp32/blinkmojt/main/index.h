#ifndef INDEX_H
#define INDEX_H

char bm_index_base[] = "<!doctype html>\
<html lang=\"en\">\
  <head>\
    <meta charset=\"utf-8\">\
    <meta name=\"viewport\" content=\"width=device-width, initial-scale=1, shrink-to-fit=no\">\
    <meta name=\"description\" content=\"\">\
    <meta name=\"generator\" content=\"Jekyll v3.8.5\">\
    <title>Cover Template · Bootstrap</title>\
    <link rel=\"canonical\" href=\"https://getbootstrap.com/docs/4.3/examples/cover/\">\
<link href=\"https://getbootstrap.com/docs/4.3/dist/css/bootstrap.min.css\" rel=\"stylesheet\" integrity=\"sha384-ggOyR0iXCbMQv3Xipma34MD+dH/1fQ784/j6cY/iJTQUOhcWr7x9JvoRxT2MZw1T\" crossorigin=\"anonymous\">\
    <style>\
      .bd-placeholder-img {\
        font-size: 1.125rem;\
        text-anchor: middle;\
        -webkit-user-select: none;\
        -moz-user-select: none;\
        -ms-user-select: none;\
        user-select: none;\
      }\
      @media (min-width: 768px) {\
        .bd-placeholder-img-lg {\
          font-size: 3.5rem;\
        }\
      }\
    </style>\
    <link href=\"https://getbootstrap.com/docs/4.3/examples/cover/cover.css\" rel=\"stylesheet\">\
  </head>\
  <body class=\"text-center\">\
    <div class=\"cover-container d-flex w-100 h-100 p-3 mx-auto flex-column\">\
  <header class=\"masthead mb-auto\">\
    <div class=\"inner\">\
      <h3 class=\"masthead-brand\">%s</h3>\
      <nav class=\"nav nav-masthead justify-content-center\">\
        <a class=\"nav-link active\" href=\"#\">Home</a>\
        <a class=\"nav-link\" href=\"#\">Features</a>\
        <a class=\"nav-link\" href=\"#\">Contact</a>\
      </nav>\
    </div>\
  </header>\
  <main role=\"main\" class=\"inner cover\">\
    <form action=\"/\" method=\"GET\">\
    <div class=\"form-group\">\
      <label for=\"text\">Text:</label>\
      <input type=\"text\" class=\"form-control\" id=\"text\" placeholder=\"Enter text\" name=\"text\">\
    </div>\
    <button type=\"submit\" class=\"btn btn-primary\">Submit</button>\
  </form>\
    <h1 class=\"cover-heading\">Elektrotekniska Föreningen</h1>\
    <p class=\"lead\">by JS && CC</p>\
    <p class=\"lead\">\
      <a href=\"#\" class=\"btn btn-lg btn-secondary\">Learn more</a>\
    </p>\
  </main>\
</div>\
</body>\
</html>";

#endif