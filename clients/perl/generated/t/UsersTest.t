=begin comment

Swaggy Jenkins

Jenkins API clients generated from Swagger / Open API specification

OpenAPI spec version: 1.0.0
Contact: blah@cliffano.com
Generated by: https://openapi-generator.tech

=end comment

=cut

#
# NOTE: This class is auto generated by the OpenAPI Generator
# Please update the test cases below to test the model.
# Ref: https://openapi-generator.tech
#
use Test::More tests => 2;
use Test::Exception;

use lib 'lib';
use strict;
use warnings;


use_ok('WWW::OpenAPIClient::Object::Users');

my $instance = WWW::OpenAPIClient::Object::Users->new();

isa_ok($instance, 'WWW::OpenAPIClient::Object::Users');

